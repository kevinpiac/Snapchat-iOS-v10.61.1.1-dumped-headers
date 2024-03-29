//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAGallerySnapAbandon : SCAUserTrackedEvent
{
    long long operationType;
    long long errorReason;
    NSString *snapId;
    NSString *mediaId;
    NSString *entryId;
    NSString *requestId;
    NSString *errorMessage;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEntryId;
- (id)getErrorMessage;
- (long long)getErrorReason;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getMediaId;
- (long long)getOperationType;
- (double)getPerUserSamplingRate;
- (id)getRequestId;
- (id)getSnapId;
- (id)init;
- (void)setEntryId:(id)arg1;
- (void)setErrorMessage:(id)arg1;
- (void)setErrorReason:(long long)arg1;
- (void)setMediaId:(id)arg1;
- (void)setOperationType:(long long)arg1;
- (void)setRequestId:(id)arg1;
- (void)setSnapId:(id)arg1;

@end

