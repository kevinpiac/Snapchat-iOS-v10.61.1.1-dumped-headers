//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSNumber, NSString;

@interface SCSearchHtmlViewModel : NSObject <NSCopying>
{
    NSString *_html;
    NSString *_baseUrl;
    NSNumber *_cellHeight;
    NSNumber *_contentOffset;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *baseUrl; // @synthesize baseUrl=_baseUrl;
@property(readonly, copy, nonatomic) NSNumber *cellHeight; // @synthesize cellHeight=_cellHeight;
@property(readonly, copy, nonatomic) NSNumber *contentOffset; // @synthesize contentOffset=_contentOffset;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(readonly, copy, nonatomic) NSString *html; // @synthesize html=_html;
- (id)initWithHtml:(id)arg1 baseUrl:(id)arg2 cellHeight:(id)arg3 contentOffset:(id)arg4;
- (_Bool)isEqual:(id)arg1;

@end

