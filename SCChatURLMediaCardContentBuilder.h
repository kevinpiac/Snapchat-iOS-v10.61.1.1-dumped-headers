//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface SCChatURLMediaCardContentBuilder : NSObject
{
    NSString *_title;
    NSString *_subtitle;
    NSString *_urlString;
    NSString *_thumbnailUrl;
    NSString *_cacheId;
    long long _metadataLoadState;
    long long _thumbnailLoadState;
}

+ (id)_withUrl:(id)arg1 title:(id)arg2 subtitle:(id)arg3 thumbnailUrl:(id)arg4;
+ (id)fromJson:(id)arg1;
+ (id)withChatURLMediaCardContent:(id)arg1;
+ (id)withURLMediaCardContent:(id)arg1 cacheId:(id)arg2;
+ (id)withURLMediaCardContent:(id)arg1 thumbnailLoadState:(long long)arg2;
+ (id)withUrl:(id)arg1 metadataLoadState:(long long)arg2;
- (void).cxx_destruct;
- (id)build;
- (id)setCacheId:(id)arg1;
- (id)setMetadataLoadState:(long long)arg1;
- (id)setSubtitle:(id)arg1;
- (id)setThumbnailLoadState:(long long)arg1;
- (id)setThumbnailUrl:(id)arg1;
- (id)setTitle:(id)arg1;
- (id)setUrlString:(id)arg1;

@end

