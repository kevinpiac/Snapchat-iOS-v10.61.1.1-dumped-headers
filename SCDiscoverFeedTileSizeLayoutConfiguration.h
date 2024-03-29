//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@interface SCDiscoverFeedTileSizeLayoutConfiguration : NSObject <NSCopying>
{
    struct CGSize _thumbnailPreferredSize;
    struct CGSize _headlineMaximumSize;
    struct CGSize _profileRowPreferredSize;
}

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) struct CGSize headlineMaximumSize; // @synthesize headlineMaximumSize=_headlineMaximumSize;
- (id)initWithThumbnailPreferredSize:(struct CGSize)arg1 headlineMaximumSize:(struct CGSize)arg2 profileRowPreferredSize:(struct CGSize)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) struct CGSize profileRowPreferredSize; // @synthesize profileRowPreferredSize=_profileRowPreferredSize;
@property(readonly, nonatomic) struct CGSize thumbnailPreferredSize; // @synthesize thumbnailPreferredSize=_thumbnailPreferredSize;

@end

