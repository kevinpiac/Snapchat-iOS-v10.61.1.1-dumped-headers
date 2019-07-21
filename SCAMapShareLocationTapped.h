//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAMapShareLocationTapped : SCAUserTrackedEvent
{
    NSNumber *isSuccess;
    NSNumber *isMischief;
    long long source;
    NSString *shareDialogType;
    NSString *resultSharingAudience;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsMischief;
- (_Bool)getIsSuccess;
- (double)getPerUserSamplingRate;
- (id)getResultSharingAudience;
- (id)getShareDialogType;
- (long long)getSource;
- (id)init;
- (void)setIsMischief:(_Bool)arg1;
- (void)setIsSuccess:(_Bool)arg1;
- (void)setResultSharingAudience:(id)arg1;
- (void)setShareDialogType:(id)arg1;
- (void)setSource:(long long)arg1;

@end
