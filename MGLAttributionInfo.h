//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSURL;

@interface MGLAttributionInfo : NSObject
{
    _Bool _feedbackLink;
    NSAttributedString *_title;
    NSURL *_URL;
}

+ (id)attributedStringForAttributionInfos:(id)arg1;
+ (id)attributionInfosFromHTMLString:(id)arg1 fontSize:(double)arg2 linkColor:(id)arg3;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)feedbackURLAtCenterCoordinate:(struct CLLocationCoordinate2D)arg1 zoomLevel:(double)arg2;
- (id)feedbackURLForStyleURL:(id)arg1 atCenterCoordinate:(struct CLLocationCoordinate2D)arg2 zoomLevel:(double)arg3 direction:(double)arg4 pitch:(double)arg5;
- (unsigned long long)hash;
- (id)initWithTitle:(id)arg1 URL:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(nonatomic, getter=isFeedbackLink) _Bool feedbackLink; // @synthesize feedbackLink=_feedbackLink;
@property(retain, nonatomic) NSAttributedString *title; // @synthesize title=_title;
- (long long)subsetCompare:(id)arg1;
- (id)titleWithStyle:(unsigned long long)arg1;

@end

