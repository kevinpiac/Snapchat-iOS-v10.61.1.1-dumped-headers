//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCConversationChatMedia;

@interface SCConversationShazamShare : NSObject <NSCopying>
{
    NSString *_attachedUrl;
    SCConversationChatMedia *_chatMedia;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *attachedUrl; // @synthesize attachedUrl=_attachedUrl;
@property(readonly, copy, nonatomic) SCConversationChatMedia *chatMedia; // @synthesize chatMedia=_chatMedia;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithAttachedUrl:(id)arg1 chatMedia:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end
