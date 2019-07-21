//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCEventProfileContentViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    _Bool _isEventProfile;
    _Bool _isEventSheet;
    NSString *_groupInviteId;
    NSString *_groupId;
    NSString *_inviteId;
    double _bottomOffset;
    NSString *_currentUserId;
    double _refreshCount;
}

- (void).cxx_destruct;
@property(nonatomic) double bottomOffset; // @synthesize bottomOffset=_bottomOffset;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *currentUserId; // @synthesize currentUserId=_currentUserId;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupInviteId; // @synthesize groupInviteId=_groupInviteId;
- (id)initWithGroupInviteId:(id)arg1 groupId:(id)arg2 inviteId:(id)arg3 isEventProfile:(_Bool)arg4 isEventSheet:(_Bool)arg5 bottomOffset:(double)arg6 currentUserId:(id)arg7 refreshCount:(double)arg8;
@property(copy, nonatomic) NSString *inviteId; // @synthesize inviteId=_inviteId;
@property(nonatomic) _Bool isEventProfile; // @synthesize isEventProfile=_isEventProfile;
@property(nonatomic) _Bool isEventSheet; // @synthesize isEventSheet=_isEventSheet;
@property(nonatomic) double refreshCount; // @synthesize refreshCount=_refreshCount;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
