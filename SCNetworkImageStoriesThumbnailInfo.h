//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, SCNetworkImageStoriesMediaInfo, SCNetworkImageStoriesThumbnailDownloadInfo;

@interface SCNetworkImageStoriesThumbnailInfo : NSObject <NSCopying>
{
    _Bool _isThumbnailBlurred;
    NSString *_snapMediaCacheKey;
    unsigned long long _thumbnailType;
    SCNetworkImageStoriesThumbnailDownloadInfo *_downloadInfo;
    SCNetworkImageStoriesMediaInfo *_snapMediaInfo;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) SCNetworkImageStoriesThumbnailDownloadInfo *downloadInfo; // @synthesize downloadInfo=_downloadInfo;
- (unsigned long long)hash;
- (id)initWithSnapMediaCacheKey:(id)arg1 thumbnailType:(unsigned long long)arg2 downloadInfo:(id)arg3 snapMediaInfo:(id)arg4 isThumbnailBlurred:(_Bool)arg5;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool isThumbnailBlurred; // @synthesize isThumbnailBlurred=_isThumbnailBlurred;
@property(readonly, copy, nonatomic) NSString *snapMediaCacheKey; // @synthesize snapMediaCacheKey=_snapMediaCacheKey;
@property(readonly, copy, nonatomic) SCNetworkImageStoriesMediaInfo *snapMediaInfo; // @synthesize snapMediaInfo=_snapMediaInfo;
@property(readonly, nonatomic) unsigned long long thumbnailType; // @synthesize thumbnailType=_thumbnailType;

@end

