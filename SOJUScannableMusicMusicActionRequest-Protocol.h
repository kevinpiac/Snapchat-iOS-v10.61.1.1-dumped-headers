//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"
#import "SOJUAuthPayload-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUScannableMusicMusicActionRequest <NSObject, NSCoding, NSCopying, SOJUAuthPayload>
@property(readonly, copy, nonatomic) NSString *artistName;
@property(readonly, copy, nonatomic) NSString *musicGenre;
@property(readonly, copy, nonatomic) NSString *reqToken;
@property(readonly, copy, nonatomic) NSNumber *songGenre;
@property(readonly, copy, nonatomic) NSString *songTitle;
@property(readonly, copy, nonatomic) NSString *timestamp;
@property(readonly, copy, nonatomic) NSString *username;
@end

