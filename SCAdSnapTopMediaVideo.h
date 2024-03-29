//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class SCAdMediaImage, SCAdMediaVideo;

@interface SCAdSnapTopMediaVideo : NSObject <NSCopying, NSCoding>
{
    SCAdMediaImage *_firstFrameImage;
    SCAdMediaVideo *_video;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
@property(readonly, copy, nonatomic) SCAdMediaImage *firstFrameImage; // @synthesize firstFrameImage=_firstFrameImage;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithFirstFrameImage:(id)arg1 video:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCAdMediaVideo *video; // @synthesize video=_video;

@end

