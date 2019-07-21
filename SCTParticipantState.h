//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIColor;

@interface SCTParticipantState : NSObject
{
    NSString *_username;
    NSString *_displayName;
    UIColor *_presenceColor;
    NSString *_bitmojiAvatarId;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithUsername:(id)arg1 displayName:(id)arg2 presenceColor:(id)arg3 bitmojiAvatarId:(id)arg4;
@property(readonly, nonatomic) UIColor *presenceColor; // @synthesize presenceColor=_presenceColor;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;

@end

