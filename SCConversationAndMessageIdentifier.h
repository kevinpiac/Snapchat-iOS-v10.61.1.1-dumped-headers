//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCConversationAndMessageIdentifier : NSObject <NSCopying>
{
    NSString *_conversationId;
    NSString *_messageIdentifier;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *conversationId; // @synthesize conversationId=_conversationId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithConversationId:(id)arg1 messageIdentifier:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *messageIdentifier; // @synthesize messageIdentifier=_messageIdentifier;

@end

