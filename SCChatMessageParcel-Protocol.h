//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSData, NSString;

@protocol SCChatMessageParcel <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *consistentId;
@property(readonly, copy, nonatomic) NSArray *media;
@property(readonly, copy, nonatomic) NSData *payload;
@property(readonly, copy, nonatomic) NSString *tag;
@property(readonly, copy, nonatomic) NSString *tagVersion;
@property(readonly, copy, nonatomic) NSString *type;
@end

