//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCStoryActionsConfiguration : NSObject <NSCopying>
{
    _Bool _isShareable;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithIsShareable:(_Bool)arg1;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isShareable; // @synthesize isShareable=_isShareable;

@end

