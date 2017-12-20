#import <Foundation/Foundation.h>
#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>
#import <React/RCTConvert.h>

@interface RNAppleMusic : RCTEventEmitter <RCTBridgeModule>
@property (nonatomic, strong) UIViewController *rootViewController;
+ (id)sharedManager;
@end
