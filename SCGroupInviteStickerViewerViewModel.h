//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"
#import "SCComposerJsConvertible-Protocol.h"

@class NSString;

@interface SCGroupInviteStickerViewerViewModel : NSObject <SCComposerJsConvertible, NSCopying>
{
    NSString *_groupId;
    NSString *_groupInviteId;
    NSString *_groupName;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSString *groupId; // @synthesize groupId=_groupId;
@property(copy, nonatomic) NSString *groupInviteId; // @synthesize groupInviteId=_groupInviteId;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
- (id)initWithGroupId:(id)arg1 groupInviteId:(id)arg2 groupName:(id)arg3;
- (id)toJavaScript;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

