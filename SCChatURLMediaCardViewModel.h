//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString, NSURL;

@interface SCChatURLMediaCardViewModel : NSObject <NSCopying>
{
    NSString *_urlThumbnailImageCacheId;
    NSString *_trackingId;
    NSURL *_url;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithUrlThumbnailImageCacheId:(id)arg1 trackingId:(id)arg2 url:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) NSString *trackingId; // @synthesize trackingId=_trackingId;
@property(readonly, copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, copy, nonatomic) NSString *urlThumbnailImageCacheId; // @synthesize urlThumbnailImageCacheId=_urlThumbnailImageCacheId;

@end

