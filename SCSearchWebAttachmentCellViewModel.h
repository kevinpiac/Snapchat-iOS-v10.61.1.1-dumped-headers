//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface SCSearchWebAttachmentCellViewModel : NSObject <NSCopying>
{
    _Bool _shouldShowSeparatorLine;
    NSString *_titleText;
    NSString *_urlString;
    long long _cellType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) long long cellType; // @synthesize cellType=_cellType;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithTitleText:(id)arg1 urlString:(id)arg2 cellType:(long long)arg3 shouldShowSeparatorLine:(_Bool)arg4;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) _Bool shouldShowSeparatorLine; // @synthesize shouldShowSeparatorLine=_shouldShowSeparatorLine;
@property(readonly, copy, nonatomic) NSString *titleText; // @synthesize titleText=_titleText;
@property(readonly, copy, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

@end

