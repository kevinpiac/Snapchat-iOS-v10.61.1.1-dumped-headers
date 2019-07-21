//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadHandler-Protocol.h"

@class SCChatMediaCache, SCChatV3MetadataStore;
@protocol SCChatLogger, SCChatRequestManager;

@interface SCChatStorySnapDownloadHandler : NSObject <SCChatMediaDownloadHandler>
{
    id <SCChatRequestManager> _chatRequestManager;
    SCChatV3MetadataStore *_metadataStore;
    id <SCChatLogger> _logger;
    SCChatMediaCache *_chatMediaCache;
}

- (void).cxx_destruct;
@property(retain, nonatomic) SCChatMediaCache *chatMediaCache; // @synthesize chatMediaCache=_chatMediaCache;
- (void)downloadItem:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithChatRequestManager:(id)arg1 metadataStore:(id)arg2 logger:(id)arg3;

@end

