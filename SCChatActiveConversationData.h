//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSDictionary, SCChatConversationMetadata, SCChatConversationSnapshotViewModel, SCChatSendBlockInfo, SCStoriesSummaryInfo;
@protocol SCChatGroup, SCChatRenderingConversation;

@interface SCChatActiveConversationData : NSObject <NSCopying>
{
    id <SCChatRenderingConversation> _conversation;
    SCChatConversationSnapshotViewModel *_snapshot;
    SCChatSendBlockInfo *_blockInfo;
    SCChatConversationMetadata *_metadata;
    SCStoriesSummaryInfo *_storiesSummary;
    id <SCChatGroup> _group;
    NSDictionary *_animationData;
    NSDictionary *_miniThumbnailImages;
    NSDictionary *_snapchattersData;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *animationData; // @synthesize animationData=_animationData;
@property(readonly, copy, nonatomic) SCChatSendBlockInfo *blockInfo; // @synthesize blockInfo=_blockInfo;
@property(readonly, nonatomic) id <SCChatRenderingConversation> conversation; // @synthesize conversation=_conversation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) id <SCChatGroup> group; // @synthesize group=_group;
- (unsigned long long)hash;
- (id)initWithConversation:(id)arg1 snapshot:(id)arg2 blockInfo:(id)arg3 metadata:(id)arg4 storiesSummary:(id)arg5 group:(id)arg6 animationData:(id)arg7 miniThumbnailImages:(id)arg8 snapchattersData:(id)arg9;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCChatConversationMetadata *metadata; // @synthesize metadata=_metadata;
@property(readonly, copy, nonatomic) NSDictionary *miniThumbnailImages; // @synthesize miniThumbnailImages=_miniThumbnailImages;
@property(readonly, copy, nonatomic) NSDictionary *snapchattersData; // @synthesize snapchattersData=_snapchattersData;
@property(readonly, copy, nonatomic) SCChatConversationSnapshotViewModel *snapshot; // @synthesize snapshot=_snapshot;
@property(readonly, copy, nonatomic) SCStoriesSummaryInfo *storiesSummary; // @synthesize storiesSummary=_storiesSummary;

@end
