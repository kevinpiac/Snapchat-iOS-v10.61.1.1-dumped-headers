//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SCAUserTrackedEvent.h"

@class NSString;

@interface SCAFriendmojiPickerClose : SCAUserTrackedEvent
{
    long long source;
    long long stickerFriendmojiType;
    NSString *friendmojiPickerStickerId;
    NSString *snapSessionId;
    NSString *mischiefId;
}

- (void).cxx_destruct;
- (id)asDictionary;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)getEventName;
- (long long)getEventQoS;
- (id)getFriendmojiPickerStickerId;
- (id)getMischiefId;
- (double)getPerUserSamplingRate;
- (id)getSnapSessionId;
- (long long)getSource;
- (long long)getStickerFriendmojiType;
- (id)init;
- (void)setFriendmojiPickerStickerId:(id)arg1;
- (void)setMischiefId:(id)arg1;
- (void)setSnapSessionId:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setStickerFriendmojiType:(long long)arg1;

@end

