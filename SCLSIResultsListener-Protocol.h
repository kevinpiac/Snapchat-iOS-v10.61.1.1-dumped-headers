//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSError, SCPNSceneIntRequest, SCPNSceneIntResponse;
@protocol SCLSIResultsBackend;

@protocol SCLSIResultsListener <NSObject>
- (void)backend:(id <SCLSIResultsBackend>)arg1 request:(SCPNSceneIntRequest *)arg2 receivedError:(NSError *)arg3;
- (void)backend:(id <SCLSIResultsBackend>)arg1 request:(SCPNSceneIntRequest *)arg2 receivedResponse:(SCPNSceneIntResponse *)arg3;
- (void)backend:(id <SCLSIResultsBackend>)arg1 willProcessRequest:(SCPNSceneIntRequest *)arg2;
@end
