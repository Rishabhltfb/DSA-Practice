enum Role {
    DRIVER,
    RIDER,
}

type MatchRequest = {
    userId: string;
    role: Role;
    city: string;
};
type RideData = {
    driverId: string;
    riderId: string;
    city: string;
    startTime: Date;
    endTime?: Date;
};

class UberRideMatching {
    private existingRequests = {};
    private ridesData: RideData[];

    public requestMatch(matchingReq: MatchRequest) {
        const isAvailabel = this.checkIfMatchAvailable(matchingReq);
        if (isAvailabel) {
        } else {
            const { city, role } = matchingReq;
            this.existingRequests[city][role];
        }
    }

    private checkIfMatchAvailable(matchingReq: MatchRequest): Boolean {
        const { city, role, userId } = matchingReq;
        if (this.existingRequests[city] != null) {
            const condition1 =
                role == Role.DRIVER &&
                this.existingRequests[city][Role.RIDER].size > 0;
            const condition2 =
                role == Role.RIDER &&
                this.existingRequests[city][Role.DRIVER].size > 0;
            if (condition1 || condition2) {
                // TODO: create match
                let driverId,
                    riderId,
                    startTime = new Date();
                const person2Request: MatchRequest =
                    this.existingRequests[city][role].pop();
                const { userId: userId2 } = person2Request;
                if (role == Role.RIDER) {
                    riderId = userId;
                    driverId = userId2;
                } else {
                    driverId = userId;
                    riderId = userId2;
                }
                const rideData: RideData = {
                    city,
                    startTime,
                    driverId,
                    riderId,
                };
                this.createRide(rideData);
                return true;
            }

            return true;
        }
        return false;
    }

    private createRide(rideData: RideData) {
        this.ridesData.push(rideData);
    }
}
