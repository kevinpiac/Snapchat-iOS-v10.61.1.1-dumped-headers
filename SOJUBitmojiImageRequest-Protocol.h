//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUBitmojiImageRequest <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *avatarId;
@property(readonly, copy, nonatomic) NSString *feature;
@property(readonly, copy, nonatomic) NSString *friendAvatarId;
@property(readonly, copy, nonatomic) NSString *imageFormat;
@property(readonly, copy, nonatomic) NSString *imageId;
@property(readonly, copy, nonatomic) NSNumber *quality;
@property(readonly, copy, nonatomic) NSNumber *scale;
@property(readonly, copy, nonatomic) NSNumber *transparent;
@property(readonly, copy, nonatomic) NSNumber *trimDeprecated;
@property(readonly, copy, nonatomic) NSString *zipFileName;
@end

