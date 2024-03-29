//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadableItem-Protocol.h"

@class NSArray, NSString;

@interface SCChatURLMetadataDownloadableItem : NSObject <SCChatMediaDownloadableItem>
{
    _Bool _needSpamCheck;
    NSArray *_urls;
    NSString *_messageId;
    NSString *_conversationId;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)initWithUrls:(id)arg1 messageId:(id)arg2 conversationId:(id)arg3 needSpamCheck:(_Bool)arg4;
- (id)mediaId;
@property(readonly, copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
@property(readonly, nonatomic) _Bool needSpamCheck; // @synthesize needSpamCheck=_needSpamCheck;
@property(readonly, nonatomic) NSArray *urls; // @synthesize urls=_urls;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

