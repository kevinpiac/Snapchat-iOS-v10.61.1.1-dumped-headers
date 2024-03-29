//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSDate, NSString;

@interface SCMediaPackageInternalInfo : NSObject <NSCopying, NSCoding>
{
    _Bool _isLocked;
    NSString *_mediaPackageId;
    NSDate *_obsoleteTime;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithMediaPackageId:(id)arg1 obsoleteTime:(id)arg2 isLocked:(_Bool)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, copy, nonatomic) NSString *mediaPackageId; // @synthesize mediaPackageId=_mediaPackageId;
@property(readonly, copy, nonatomic) NSDate *obsoleteTime; // @synthesize obsoleteTime=_obsoleteTime;

@end

