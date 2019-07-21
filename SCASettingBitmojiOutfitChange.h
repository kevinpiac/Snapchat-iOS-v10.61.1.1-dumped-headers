//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASettingBitmojiOutfitChange : SCAUserTrackedEvent
{
    NSNumber *bitmojiOutfitId;
    NSNumber *success;
    long long source;
    long long bitmojiAvatarBuilderType;
    NSString *bitmojiSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getBitmojiAvatarBuilderType;
- (long long)getBitmojiOutfitId;
- (id)getBitmojiSessionId;
- (id)getEventName;
- (long long)getEventQoS;
- (double)getPerUserSamplingRate;
- (long long)getSource;
- (_Bool)getSuccess;
- (id)init;
- (void)setBitmojiAvatarBuilderType:(long long)arg1;
- (void)setBitmojiOutfitId:(long long)arg1;
- (void)setBitmojiSessionId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setSuccess:(_Bool)arg1;

@end

