//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCMyUnifiedProfileSnapProSectionContentDataModel : NSObject <NSCopying>
{
    NSString *_businessId;
    NSString *_headerText;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *businessId; // @synthesize businessId=_businessId;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *headerText; // @synthesize headerText=_headerText;
- (id)initWithBusinessId:(id)arg1 headerText:(id)arg2;
- (_Bool)isEqual:(id)arg1;

@end

