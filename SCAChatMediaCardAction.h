//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAChatMediaCardAction : SCAUserTrackedEvent
{
    long long mediaType;
    long long actionResponse;
    NSString *mediaActionType;
    NSString *mischiefId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getActionResponse;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getMediaActionType;
- (long long)getMediaType;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (id)init;
- (void)setActionResponse:(long long)arg1;
- (void)setMediaActionType:(id)arg1;
- (void)setMediaType:(long long)arg1;
- (void)setMischiefId:(id)arg1;

@end

