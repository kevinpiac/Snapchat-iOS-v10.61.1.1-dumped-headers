//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDictionary;

@interface SCChatMediaCardsMessageMetadata : NSObject <NSCopying, NSCoding>
{
    NSDictionary *_urlMediaCardContents;
    NSDictionary *_addressMediaCardContents;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *addressMediaCardContents; // @synthesize addressMediaCardContents=_addressMediaCardContents;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUrlMediaCardContents:(id)arg1 addressMediaCardContents:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSDictionary *urlMediaCardContents; // @synthesize urlMediaCardContents=_urlMediaCardContents;

@end

