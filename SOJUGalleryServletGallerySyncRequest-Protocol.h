//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUGalleryServletGallerySyncRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSNumber *clientCompatVersion;
@property(readonly, copy, nonatomic) NSNumber *highSeqnum;
@property(readonly, copy, nonatomic) NSNumber *lastSeqnum;
@property(readonly, copy, nonatomic) NSNumber *lowSeqnum;
@property(readonly, copy, nonatomic) NSNumber *mediaFormat;
@property(readonly, copy, nonatomic) NSNumber *mediaUrl;
@property(readonly, copy, nonatomic) NSNumber *miniThumbnailBytes;
@property(readonly, copy, nonatomic) NSNumber *overlayImageUrl;
@property(readonly, copy, nonatomic) NSNumber *pageSize;
@property(readonly, copy, nonatomic) NSNumber *snapTags;
@property(readonly, copy, nonatomic) NSNumber *sojuInitSync;
@property(readonly, copy, nonatomic) NSString *syncToken;
@property(readonly, copy, nonatomic) NSNumber *thumbnailUrl;
@end

