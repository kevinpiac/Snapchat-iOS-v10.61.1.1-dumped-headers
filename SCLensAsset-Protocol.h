//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSData, NSString, NSURL;

@protocol SCLensAsset <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *avatarId;
@property(readonly, copy, nonatomic) NSString *encodedBitmoji;
@property(readonly, copy, nonatomic) NSData *encryptionIv;
@property(readonly, copy, nonatomic) NSData *encryptionKey;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *originalFilename;
@property(readonly, nonatomic) long long preloadLimit;
@property(readonly, nonatomic) long long requestTiming;
@property(readonly, nonatomic) long long scale;
@property(readonly, copy, nonatomic) NSString *signature;
@property(readonly, nonatomic) long long type;
@property(readonly, copy, nonatomic) NSURL *url;
@property(readonly, copy, nonatomic) NSString *userId;
@end

