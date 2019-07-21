//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSArray, NSString, SCSearchQuery;

@interface SCSearchGameCardSectionDataModel : NSObject <NSCopying>
{
    SCSearchQuery *_query;
    NSString *_resultContentIdentifier;
    NSArray *_gameCards;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy, nonatomic) NSArray *gameCards; // @synthesize gameCards=_gameCards;
- (unsigned long long)hash;
- (id)initWithQuery:(id)arg1 resultContentIdentifier:(id)arg2 gameCards:(id)arg3;
- (_Bool)isEqual:(id)arg1;
@property(readonly, copy, nonatomic) SCSearchQuery *query; // @synthesize query=_query;
@property(readonly, copy, nonatomic) NSString *resultContentIdentifier; // @synthesize resultContentIdentifier=_resultContentIdentifier;

@end

