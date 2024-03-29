//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAActivityCardBaseEvent : SCAUserTrackedEvent
{
    long long cardType;
    long long action;
    NSString *cardLink;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getAction;
- (id)getCardLink;
- (long long)getCardType;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setAction:(long long)arg1;
- (void)setCardLink:(id)arg1;
- (void)setCardType:(long long)arg1;

@end

