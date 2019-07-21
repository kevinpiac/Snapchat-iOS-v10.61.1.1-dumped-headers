//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SCChatMediaDownloadableItem-Protocol.h"

@class NSString, SCChatAddressMediaCardContent;

@interface SCChatAddressThumbnailDownloadableItem : NSObject <SCChatMediaDownloadableItem>
{
    NSString *_conversationId;
    SCChatAddressMediaCardContent *_addressMediaCardContent;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) SCChatAddressMediaCardContent *addressMediaCardContent; // @synthesize addressMediaCardContent=_addressMediaCardContent;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)initWithAddressMediaCardContent:(id)arg1 conversationId:(id)arg2;
- (id)mediaId;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

