//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCALensButtonShown : SCAUserTrackedEvent
{
    long long buttonType;
    NSString *filterLensId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getButtonType;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFilterLensId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setButtonType:(long long)arg1;
- (void)setFilterLensId:(id)arg1;

@end

