//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCConversationIntRange : NSObject <NSCopying>
{
    long long _loc;
    long long _length;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithLoc:(long long)arg1 length:(long long)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) long long length; // @synthesize length=_length;
@property(readonly, nonatomic) long long loc; // @synthesize loc=_loc;

@end

