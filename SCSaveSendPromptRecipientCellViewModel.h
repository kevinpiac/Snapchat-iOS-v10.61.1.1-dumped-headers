//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCAvatarViewModel;

@interface SCSaveSendPromptRecipientCellViewModel : NSObject <NSCopying>
{
    _Bool _isSelected;
    _Bool _isMyStory;
    _Bool _isGroup;
    SCAvatarViewModel *_avatarViewModel;
    NSString *_individualUsername;
    NSString *_displayName;
    NSString *_recipientId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCAvatarViewModel *avatarViewModel; // @synthesize avatarViewModel=_avatarViewModel;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *individualUsername; // @synthesize individualUsername=_individualUsername;
- (id)initWithAvatarViewModel:(id)arg1 individualUsername:(id)arg2 displayName:(id)arg3 recipientId:(id)arg4 isSelected:(_Bool)arg5 isMyStory:(_Bool)arg6 isGroup:(_Bool)arg7;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isGroup; // @synthesize isGroup=_isGroup;
@property(readonly, nonatomic) _Bool isMyStory; // @synthesize isMyStory=_isMyStory;
@property(readonly, nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
@property(readonly, copy, nonatomic) NSString *recipientId; // @synthesize recipientId=_recipientId;

@end

