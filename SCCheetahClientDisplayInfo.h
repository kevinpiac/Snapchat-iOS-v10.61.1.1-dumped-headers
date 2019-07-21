//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@interface SCCheetahClientDisplayInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _hideTimestamp;
    _Bool _showCompleted;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool hideTimestamp; // @synthesize hideTimestamp=_hideTimestamp;
- (id)initWithCoder:(id)arg1;
- (id)initWithHideTimestamp:(_Bool)arg1 showCompleted:(_Bool)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool showCompleted; // @synthesize showCompleted=_showCompleted;

@end

