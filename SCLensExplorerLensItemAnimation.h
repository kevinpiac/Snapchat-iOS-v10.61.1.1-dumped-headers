//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSArray, NSString;

@interface SCLensExplorerLensItemAnimation : NSObject <NSCopying, NSCoding>
{
    NSString *_unlockableId;
    NSString *_mediaKey;
    NSArray *_imageURLs;
    double _frameInterval;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, nonatomic) double frameInterval; // @synthesize frameInterval=_frameInterval;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
- (id)initWithCoder:(id)arg1;
- (id)initWithUnlockableId:(id)arg1 mediaKey:(id)arg2 imageURLs:(id)arg3 frameInterval:(double)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *mediaKey; // @synthesize mediaKey=_mediaKey;
@property(readonly, copy, nonatomic) NSString *unlockableId; // @synthesize unlockableId=_unlockableId;

@end
