//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCMapStatusViewerViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _isBirthday;
    _Bool _isStoryMuted;
    _Bool _isStoryUnviewed;
    NSString *_userId;
    NSString *_displayName;
    NSString *_username;
    NSString *_bitmojiAvatarId;
    NSString *_bitmojiSelfieId;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *bitmojiAvatarId; // @synthesize bitmojiAvatarId=_bitmojiAvatarId;
@property(copy, nonatomic) NSString *bitmojiSelfieId; // @synthesize bitmojiSelfieId=_bitmojiSelfieId;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (id)initWithUserId:(id)arg1 displayName:(id)arg2 username:(id)arg3 bitmojiAvatarId:(id)arg4 bitmojiSelfieId:(id)arg5 isBirthday:(_Bool)arg6 isStoryMuted:(_Bool)arg7 isStoryUnviewed:(_Bool)arg8;
@property(nonatomic) _Bool isBirthday; // @synthesize isBirthday=_isBirthday;
@property(nonatomic) _Bool isStoryMuted; // @synthesize isStoryMuted=_isStoryMuted;
@property(nonatomic) _Bool isStoryUnviewed; // @synthesize isStoryUnviewed=_isStoryUnviewed;
@property(copy, nonatomic) NSString *userId; // @synthesize userId=_userId;
@property(copy, nonatomic) NSString *username; // @synthesize username=_username;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

