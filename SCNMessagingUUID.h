//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSData;

@interface SCNMessagingUUID : NSObject <NSCopying>
{
    NSData *_id;
}

+ (id)RandomUUID;
+ (id)UUIDWithId:(id)arg1;
+ (id)UUIDWithString:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
@property(readonly, nonatomic) NSData *id; // @synthesize id=_id;
- (id)initWithId:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (id)toString;

@end
