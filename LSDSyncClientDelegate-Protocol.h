//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class LSDAddress, LSDSyncClient, NSError, NSString, NSURL;

@protocol LSDSyncClientDelegate
- (void)syncClient:(LSDSyncClient *)arg1 connectionDidFailWithError:(NSError *)arg2;
- (void)syncClient:(LSDSyncClient *)arg1 didConnectWithAddress:(LSDAddress *)arg2;
- (void)syncClient:(LSDSyncClient *)arg1 didUpdateLensContentWithId:(NSString *)arg2 URL:(NSURL *)arg3;
- (void)syncClientDidDisconnect:(LSDSyncClient *)arg1 wasClean:(_Bool)arg2;
@end

