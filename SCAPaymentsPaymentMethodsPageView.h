//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCAPaymentsPaymentMethodsPageView : SCAUserTrackedEvent
{
    NSNumber *pageSequenceId;
    NSNumber *viewTimeSec;
    long long pageName;
    long long previousPage;
    long long nextPage;
    long long exitEvent;
    NSString *paymentsSessionId;
    NSString *adAccountId;
    NSString *source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getAdAccountId;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getExitEvent;
- (long long)getNextPage;
- (long long)getPageName;
- (long long)getPageSequenceId;
- (id)getPaymentsSessionId;
- (double)getPerUserSamplingRate;
- (long long)getPreviousPage;
- (id)getSource;
- (double)getViewTimeSec;
- (id)init;
- (void)setAdAccountId:(id)arg1;
- (void)setExitEvent:(long long)arg1;
- (void)setNextPage:(long long)arg1;
- (void)setPageName:(long long)arg1;
- (void)setPageSequenceId:(long long)arg1;
- (void)setPaymentsSessionId:(id)arg1;
- (void)setPreviousPage:(long long)arg1;
- (void)setSource:(id)arg1;
- (void)setViewTimeSec:(double)arg1;

@end
