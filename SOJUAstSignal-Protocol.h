//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCoding-Protocol.h"
#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSNumber, NSString;

@protocol SOJUAstSignal <NSObject, NSCoding, NSCopying>
@property(readonly, copy, nonatomic) NSString *descriptionValue;
@property(readonly, copy, nonatomic) NSNumber *identifier;
@property(readonly, copy, nonatomic) NSString *name;
@property(readonly, copy, nonatomic) NSString *type;
@property(readonly, copy, nonatomic) NSNumber *value;
@property(readonly, copy, nonatomic) NSString *version;
@end

