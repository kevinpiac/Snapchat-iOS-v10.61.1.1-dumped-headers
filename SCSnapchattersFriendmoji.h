//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSnapchattersFriendmoji : NSObject <NSCopying>
{
    NSString *_categoryName;
    double _expirationTimestamp;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *categoryName; // @synthesize categoryName=_categoryName;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) double expirationTimestamp; // @synthesize expirationTimestamp=_expirationTimestamp;
- (unsigned long long)hash;
- (id)initWithCategoryName:(id)arg1 expirationTimestamp:(double)arg2;
- (id)initWithSCCFriendmoji:(id)arg1;
- (_Bool)isEqual:(id)arg1;

@end
