//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSSet, NSString, SCMapPersonLocation, SCMapPersonLocationCluster, SCMapPersonLocationsListenerAnnouncer;

@protocol SCMapPersonLocationsProviding <NSObject>
- (NSSet *)allPersonLocationClusters;
- (NSSet *)allPersonLocations;
- (SCMapPersonLocationsListenerAnnouncer *)announcer;
- (SCMapPersonLocationCluster *)personLocationClusterForUserId:(NSString *)arg1;
- (SCMapPersonLocation *)personLocationForUserId:(NSString *)arg1;
@end

