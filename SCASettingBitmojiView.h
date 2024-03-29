//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSNumber, NSString;

@interface SCASettingBitmojiView : SCAUserTrackedEvent
{
    NSNumber *isBitmojiLinked;
    long long source;
    long long bitmojiAvatarBuilderType;
    NSString *profileSessionId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (long long)getBitmojiAvatarBuilderType;
- (id)getEventName;
- (long long)getEventQoS;
- (_Bool)getIsBitmojiLinked;
- (double)getPerUserSamplingRate;
- (id)getProfileSessionId;
- (long long)getSource;
- (id)init;
- (void)setBitmojiAvatarBuilderType:(long long)arg1;
- (void)setIsBitmojiLinked:(_Bool)arg1;
- (void)setProfileSessionId:(id)arg1;
- (void)setSource:(long long)arg1;

@end

