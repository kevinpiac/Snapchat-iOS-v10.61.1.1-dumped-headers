//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUIdentityContactWithData <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *customRingtone;
@property(readonly, copy, nonatomic) NSString *displayName;
@property(readonly, copy, nonatomic) NSNumber *lastTimeContacted;
@property(readonly, copy, nonatomic) NSNumber *lastUpdatedTimestamp;
@property(readonly, copy, nonatomic) NSString *number;
@property(readonly, copy, nonatomic) NSString *photoId;
@property(readonly, copy, nonatomic) NSString *photoUri;
@property(readonly, copy, nonatomic) NSNumber *starred;
@property(readonly, copy, nonatomic) NSNumber *timesContacted;
@end

