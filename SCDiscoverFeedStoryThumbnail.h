//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"

@class NSString, SCMedia;

@interface SCDiscoverFeedStoryThumbnail : NSObject <NSCopying, NSCoding>
{
    SCMedia *_searchMedia;
    NSString *_videoThumbnailURL;
    NSString *_videoFirstFrameThumbnailURL;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSearchMedia:(id)arg1 videoThumbnailURL:(id)arg2 videoFirstFrameThumbnailURL:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCMedia *searchMedia; // @synthesize searchMedia=_searchMedia;
@property(readonly, copy, nonatomic) NSString *videoFirstFrameThumbnailURL; // @synthesize videoFirstFrameThumbnailURL=_videoFirstFrameThumbnailURL;
@property(readonly, copy, nonatomic) NSString *videoThumbnailURL; // @synthesize videoThumbnailURL=_videoThumbnailURL;

@end

