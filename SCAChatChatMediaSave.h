//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAChatChatMediaSave : SCAUserTrackedEvent
{
    long long mediaType;
    long long saveType;
    long long source;
    NSString *mischiefId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (long long)getMediaType;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (long long)getSaveType;
- (long long)getSource;
- (id)init;
- (void)setMediaType:(long long)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setSaveType:(long long)arg1;
- (void)setSource:(long long)arg1;

@end
