//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MMPTools : NSObject
{
}

+ (id)queryStringFromQueryItems:(id)arg1;
+ (id)queryItemsFromQueryString:(id)arg1;
+ (id)stringValue:(id)arg1;
+ (id)urlDecode:(id)arg1;
+ (id)urlEncode:(id)arg1;
+ (id)bundlePathForFile:(id)arg1;
+ (id)strFromDict:(id)arg1;
+ (id)javascriptStringify:(id)arg1;
+ (id)dataFromDict:(id)arg1;
+ (id)dictFromData:(id)arg1;
+ (id)dictFromStr:(id)arg1;
+ (id)randomStrWithCount:(unsigned long long)arg1;
+ (id)imageFromFramework:(id)arg1;
+ (id)imageNamed:(id)arg1;
+ (id)imageViewWithImage:(id)arg1;
+ (id)imageWithColor:(id)arg1 size:(struct CGSize)arg2;
+ (double)floatWithHexStr:(id)arg1;
+ (id)colorWithHexStr:(id)arg1;
+ (double)sizeOfPixels:(long long)arg1;
+ (void)realHideKeyboard;
+ (void)hideKeyboard;
+ (id)currentTopViewController;
+ (id)keyWindow;
+ (struct CGRect)screenRect;

@end

