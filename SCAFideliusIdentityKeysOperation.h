//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAFideliusIdentityKeysOperation : SCAUserTrackedEvent
{
    long long eventType;
    NSString *operationResult;
    NSString *source;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getEventType;
- (id)getOperationResult;
- (double)getPerUserSamplingRate;
- (id)getSource;
- (id)init;
- (void)setEventType:(long long)arg1;
- (void)setOperationResult:(id)arg1;
- (void)setSource:(id)arg1;

@end

